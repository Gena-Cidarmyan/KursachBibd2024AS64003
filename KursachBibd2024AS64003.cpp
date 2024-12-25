// KursachBibd2024AS64003.cpp: определяет точку входа для приложения.
//

#include <realm.hpp>
#include <iostream>

int main() {
    // Конфигурация базы данных
    realm::Realm::Config config;
    config.path = "expense_tracker.realm";
    auto realm = realm::Realm::get_shared_realm(config);

    // Определение схем
    struct Transaction : realm::Object {
    realm::persisted<std::string> type;        // "income" или "expense"
    realm::persisted<std::string> category;    // Категория
    realm::persisted<double> amount;           // Сумма
    realm::persisted<std::string> note;        // Заметка
    realm::persisted<int64_t> date;            // Временная метка (timestamp)

    static constexpr auto schema = realm::schema("Transaction",
        realm::property<&Transaction::type>("type"),
        realm::property<&Transaction::category>("category"),
        realm::property<&Transaction::amount>("amount"),
        realm::property<&Transaction::note>("note"),
        realm::property<&Transaction::date>("date"));
};

    struct Category : realm::Object {
    realm::persisted<std::string> name;        // Название категории
    realm::persisted<std::string> type;        // "income" или "expense"

    static constexpr auto schema = realm::schema("Category",
        realm::property<&Category::name>("name"),
        realm::property<&Category::type>("type"));
};


    realm->update_schema({Transaction::schema, Category::schema});

    // Добавление категории
    realm->begin_transaction();
    auto category = realm->objects<Category>().create({"Food", "expense"});
    realm->commit_transaction();

    // Добавление транзакции
    realm->begin_transaction();
    auto transaction = realm->objects<Transaction>().create({"expense", "Food", 15.5, "Lunch at cafe", 1702312345});
    realm->commit_transaction();

    std::cout << "Transaction added!" << std::endl;

    return 0;
}

