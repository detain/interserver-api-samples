<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A DirectAdmin license tier option.
 */
class VpsDALicense
{
    /**
     * License tier name.
     */
    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    /**
     * License tier sub-name.
     */
    #[DTA\Data(field: "sub_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sub_name = null;

    /**
     * Monthly cost in cents.
     */
    #[DTA\Data(field: "cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cost = null;

    /**
     * Image path for the disabled state icon.
     */
    #[DTA\Data(field: "img_disabled", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img_disabled = null;

    /**
     * Image path for the active state icon.
     */
    #[DTA\Data(field: "img_active", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img_active = null;

}
