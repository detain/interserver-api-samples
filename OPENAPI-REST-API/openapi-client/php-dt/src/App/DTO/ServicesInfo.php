<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Contains the complete catalog of available modules, services, service types, and service categories.
 */
class ServicesInfo
{
    #[DTA\Data(field: "modules")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Modules::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Modules::class])]
    public \App\DTO\Modules|null $modules = null;

    #[DTA\Data(field: "services")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Services::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Services::class])]
    public \App\DTO\Services|null $services = null;

    #[DTA\Data(field: "serviceTypes")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServiceTypes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServiceTypes::class])]
    public \App\DTO\ServiceTypes|null $service_types = null;

    #[DTA\Data(field: "serviceCategories")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServiceCategories::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServiceCategories::class])]
    public \App\DTO\ServiceCategories|null $service_categories = null;

}
