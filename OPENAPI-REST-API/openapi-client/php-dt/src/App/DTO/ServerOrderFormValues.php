<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Form values for the server order.
 */
class ServerOrderFormValues
{
    /**
     * Memory value for the server order.
     */
    #[DTA\Data(field: "memory", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $memory = null;

    /**
     * Bandwidth value for the server order.
     */
    #[DTA\Data(field: "bandwidth", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bandwidth = null;

    /**
     * IPs value for the server order.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ips = null;

    /**
     * Operating System value for the server order.
     */
    #[DTA\Data(field: "os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os = null;

    /**
     * Control Panel value for the server order.
     */
    #[DTA\Data(field: "cp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cp = null;

    /**
     * RAID value for the server order.
     */
    #[DTA\Data(field: "raid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $raid = null;

    /**
     * Hard Drives value for the server order.
     */
    #[DTA\Data(field: "hd", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hd = null;

}
