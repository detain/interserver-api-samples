<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Configuration IDs for the server order.
 */
class ServerOrderConfigIds
{
    /**
     * Memory configuration ID for the server order.
     */
    #[DTA\Data(field: "memory", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $memory = null;

    /**
     * Bandwidth configuration ID for the server order.
     */
    #[DTA\Data(field: "bandwidth", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bandwidth = null;

    /**
     * IPs configuration ID for the server order.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ips = null;

    /**
     * Operating System configuration ID for the server order.
     */
    #[DTA\Data(field: "os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os = null;

    /**
     * Control Panel configuration ID for the server order.
     */
    #[DTA\Data(field: "cp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cp = null;

    /**
     * RAID configuration ID for the server order.
     */
    #[DTA\Data(field: "raid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $raid = null;

    /**
     * Hard Drives configuration ID for the server order.
     */
    #[DTA\Data(field: "hd", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hd = null;

}
