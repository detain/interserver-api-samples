<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class HomeServicesLicenses
{
    #[DTA\Data(field: "links", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServicesLicensesLinks::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServicesLicensesLinks::class])]
    public \App\DTO\HomeServicesLicensesLinks|null $links = null;

    /**
     * Number of licenses.
     */
    #[DTA\Data(field: "count", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $count = null;

}
