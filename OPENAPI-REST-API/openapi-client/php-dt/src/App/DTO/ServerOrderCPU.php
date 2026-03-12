<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A CPU option available when ordering a dedicated server.
 */
class ServerOrderCPU
{
    /**
     * CPU ID.
     */
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * CPU price.
     */
    #[DTA\Data(field: "price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $price = null;

    /**
     * CPU image.
     */
    #[DTA\Data(field: "img", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $img = null;

    /**
     * Short description of the CPU.
     */
    #[DTA\Data(field: "short_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $short_desc = null;

    /**
     * Long description of the CPU.
     */
    #[DTA\Data(field: "long_desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $long_desc = null;

    /**
     * Location of the CPU.
     */
    #[DTA\Data(field: "location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $location = null;

    /**
     * Front Side Bus information.
     */
    #[DTA\Data(field: "fsb", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $fsb = null;

    /**
     * Manufacturer information.
     */
    #[DTA\Data(field: "manu", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $manu = null;

    /**
     * CPU type.
     */
    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    /**
     * CPU speed.
     */
    #[DTA\Data(field: "speed", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $speed = null;

    /**
     * Cache information.
     */
    #[DTA\Data(field: "cache", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cache = null;

    /**
     * Active status.
     */
    #[DTA\Data(field: "active", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $active = null;

    /**
     * Number of cores.
     */
    #[DTA\Data(field: "num_cores", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $num_cores = null;

    /**
     * Number of CPUs.
     */
    #[DTA\Data(field: "num_cpus", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $num_cpus = null;

    /**
     * CPU benchmark.
     */
    #[DTA\Data(field: "benchmark", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $benchmark = null;

    /**
     * Monthly price.
     */
    #[DTA\Data(field: "monthly_price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $monthly_price = null;

    /**
     * Maximum RAM supported.
     */
    #[DTA\Data(field: "max_ram", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_ram = null;

    /**
     * Minimum RAM required.
     */
    #[DTA\Data(field: "min_ram", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $min_ram = null;

    /**
     * Maximum LFF (Large Form Factor) supported.
     */
    #[DTA\Data(field: "max_lff", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_lff = null;

    /**
     * Maximum SFF (Small Form Factor) supported.
     */
    #[DTA\Data(field: "max_sff", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_sff = null;

    /**
     * Maximum NVMe drives supported.
     */
    #[DTA\Data(field: "max_nve", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $max_nve = null;

    /**
     * Visibility status.
     */
    #[DTA\Data(field: "visible", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $visible = null;

    /**
     * Hard drive IDs.
     */
    #[DTA\Data(field: "hd_ids", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $hd_ids = null;

    /**
     * Display of CPU price.
     */
    #[DTA\Data(field: "price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $price_display = null;

    /**
     * Display of monthly CPU price.
     */
    #[DTA\Data(field: "monthly_price_display", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $monthly_price_display = null;

}
