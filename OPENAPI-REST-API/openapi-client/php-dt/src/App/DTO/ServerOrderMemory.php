<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A memory (RAM) option available when ordering a dedicated server.
 */
class ServerOrderMemory
{
    /**
     * Memory ID.
     */
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * Memory price.
     */
    #[DTA\Data(field: "price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $price = null;

    /**
     * Memory image.
     */
    #[DTA\Data(field: "img", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img = null;

    /**
     * Short description of the memory.
     */
    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    /**
     * Long description of the memory.
     */
    #[DTA\Data(field: "long_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $long_desc = null;

    /**
     * Manufacturer information.
     */
    #[DTA\Data(field: "manu", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $manu = null;

    /**
     * Memory size.
     */
    #[DTA\Data(field: "size", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $size = null;

    /**
     * Memory type.
     */
    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    /**
     * Hidden status.
     */
    #[DTA\Data(field: "hidden", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hidden = null;

    /**
     * Monthly price.
     */
    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $monthly_price = null;

    /**
     * Drive type.
     */
    #[DTA\Data(field: "drive_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $drive_type = null;

    /**
     * Display of monthly memory price.
     */
    #[DTA\Data(field: "monthly_price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_price_display = null;

}
