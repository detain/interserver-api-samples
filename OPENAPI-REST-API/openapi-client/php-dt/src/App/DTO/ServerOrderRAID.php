<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A RAID configuration option available when ordering a dedicated server.
 */
class ServerOrderRAID
{
    /**
     * RAID ID.
     */
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * RAID price.
     */
    #[DTA\Data(field: "price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $price = null;

    /**
     * RAID image.
     */
    #[DTA\Data(field: "img", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img = null;

    /**
     * Short description of the RAID.
     */
    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    /**
     * Long description of the RAID.
     */
    #[DTA\Data(field: "long_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $long_desc = null;

    /**
     * Monthly price.
     */
    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $monthly_price = null;

    /**
     * Active status.
     */
    #[DTA\Data(field: "active", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $active = null;

    /**
     * Display of RAID price.
     */
    #[DTA\Data(field: "price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $price_display = null;

    /**
     * Display of monthly RAID price.
     */
    #[DTA\Data(field: "monthly_price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_price_display = null;

}
