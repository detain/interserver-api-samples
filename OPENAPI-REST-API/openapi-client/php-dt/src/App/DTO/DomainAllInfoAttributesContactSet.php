<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DomainAllInfoAttributesContactSet
{
    #[DTA\Data(field: "owner", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainOwnerContact::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainOwnerContact::class])]
    public \App\DTO\DomainOwnerContact|null $owner = null;

    #[DTA\Data(field: "admin", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainAdminContact::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainAdminContact::class])]
    public \App\DTO\DomainAdminContact|null $admin = null;

    #[DTA\Data(field: "tech", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainTechContact::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainTechContact::class])]
    public \App\DTO\DomainTechContact|null $tech = null;

}
