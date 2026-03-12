<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * An IP block option available when ordering a dedicated server.
 */
class ServerOrderIP
{
    /**
     * IP ID.
     */
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * IP price.
     */
    #[DTA\Data(field: "price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $price = null;

    /**
     * IP image.
     */
    #[DTA\Data(field: "img", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img = null;

    /**
     * Short description of the IP.
     */
    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    /**
     * Long description of the IP.
     */
    #[DTA\Data(field: "long_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $long_desc = null;

    /**
     * Quantity of IPs.
     */
    #[DTA\Data(field: "qty", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qty = null;

    /**
     * Monthly price.
     */
    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $monthly_price = null;

    /**
     * Display of IP price.
     */
    #[DTA\Data(field: "price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $price_display = null;

    /**
     * Display of monthly IP price.
     */
    #[DTA\Data(field: "monthly_price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_price_display = null;

}
