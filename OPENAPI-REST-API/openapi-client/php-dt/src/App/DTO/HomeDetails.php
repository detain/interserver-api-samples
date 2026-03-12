<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Users details.
 */
class HomeDetails
{
    #[DTA\Data(field: "modules", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetailsModules::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetailsModules::class])]
    public \App\DTO\HomeDetailsModules|null $modules = null;

}
