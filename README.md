# SmartHomeManager

## Описание
SmartHomeManager - это мощная платформа для управления умным домом, построенная с использованием языка C и принципов Domain-Driven Design (DDD). Платформа включает модули для управления устройствами, комнатами и автоматизации процессов в умном доме.

## Структура проекта
Проект разделен на несколько слоев для улучшения читаемости и поддерживаемости кода:

- **Domain**: Основная бизнес-логика и правила.
- **Application**: Интерфейсы, юзкейсы и реализации для работы с данными.
- **Infrastructure**: Реализация деталей инфраструктуры, таких как репозитории данных.
- **Presentation**: Визуализация данных и взаимодействие с пользователем.

## Установка
1. Клонируйте репозиторий:
    ```bash
    git clone <URL репозитория>
    ```
2. Перейдите в каталог проекта:
    ```bash
    cd smart_home_manager
    ```
3. Скомпилируйте проект с использованием Makefile:
    ```bash
    make
    ```

## Запуск
Для запуска проекта выполните команду:
```bash
./build/smart_home_manager
```

## Структура каталогов
```plaintext
smart_home_manager/
├── src/
│   ├── domain/
│   │   ├── entities/
│   │   │   ├── device.h
│   │   │   ├── device.c
│   │   │   ├── room.h
│   │   │   ├── room.c
│   │   ├── repositories/
│   │   │   ├── device_repository.h
│   │   │   └── device_repository.c
│   │   ├── services/
│   │   │   └── device_service.h
│   │   │   └── device_service.c
│   │   └── use_cases/
│   │       └── manage_devices.h
│   │       └── manage_devices.c
│   ├── infrastructure/
│   │   ├── persistence/
│   │   │   └── device_repository_impl.h
│   │   │   └── device_repository_impl.c
│   ├── presentation/
│   │   ├── controllers/
│   │   │   └── device_controller.h
│   │   │   └── device_controller.c
│   ├── main.c
├── include/
├── build/
├── Makefile
└── README.md
```

## Описание компонентов
### Domain
- **device.h, device.c**: Классы сущностей устройств.
- **room.h, room.c**: Классы сущностей комнат.
- **device_repository.h**: Интерфейс репозитория устройств.

### Application
- **manage_devices.h, manage_devices.c**: Юзкейсы для управления устройствами.

### Infrastructure
- **device_repository_impl.h, device_repository_impl.c**: Реализация репозитория устройств.

### Presentation
- **device_controller.h, device_controller.c**: Контроллер для управления устройствами.

## Лицензия
Этот проект лицензирован под лицензией MIT. Для получения дополнительной информации смотрите файл LICENSE.
