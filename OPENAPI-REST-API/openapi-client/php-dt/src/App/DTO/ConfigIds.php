<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Internal configuration IDs mapped from the selected form values for a server order.
 */
class ConfigIds
{
    /**
     * Configuration ID for the selected memory option.
     */
    #[DTA\Data(field: "memory", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $memory = null;

    /**
     * Configuration ID for the selected hard drive option.
     */
    #[DTA\Data(field: "hd", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $hd = null;

    /**
     * Configuration ID for the selected bandwidth option.
     */
    #[DTA\Data(field: "bandwidth", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $bandwidth = null;

    /**
     * Configuration ID for the selected IP block option.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $ips = null;

    /**
     * Configuration ID for the selected operating system.
     */
    #[DTA\Data(field: "os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $os = null;

    /**
     * Configuration ID for the selected control panel.
     */
    #[DTA\Data(field: "cp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cp = null;

    /**
     * Configuration ID for the selected RAID option.
     */
    #[DTA\Data(field: "raid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $raid = null;

}
