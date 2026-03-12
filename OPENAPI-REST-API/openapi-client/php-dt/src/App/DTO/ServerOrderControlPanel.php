<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A control panel option available when ordering a dedicated server.
 */
class ServerOrderControlPanel
{
    /**
     * Control Panel ID.
     */
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * Control Panel price.
     */
    #[DTA\Data(field: "price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $price = null;

    /**
     * Control Panel image.
     */
    #[DTA\Data(field: "img", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img = null;

    /**
     * Short description of the control panel.
     */
    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    /**
     * Long description of the control panel.
     */
    #[DTA\Data(field: "long_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $long_desc = null;

    /**
     * OS types compatible with the control panel.
     */
    #[DTA\Data(field: "os_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os_type = null;

    /**
     * Monthly price.
     */
    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $monthly_price = null;

    /**
     * List of types.
     */
    #[DTA\Data(field: "types", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection92::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection92::class])]
    public \App\DTO\Collection92|null $types = null;

    /**
     * Display of control panel price.
     */
    #[DTA\Data(field: "price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $price_display = null;

    /**
     * Display of monthly control panel price.
     */
    #[DTA\Data(field: "monthly_price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_price_display = null;

}
