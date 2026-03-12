<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Currently selected configuration option IDs for a server order form.
 */
class FormValues
{
    /**
     * Selected memory option ID.
     */
    #[DTA\Data(field: "memory", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $memory = null;

    /**
     * Selected bandwidth option ID.
     */
    #[DTA\Data(field: "bandwidth", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $bandwidth = null;

    /**
     * Selected IP block option ID.
     */
    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $ips = null;

    /**
     * Selected operating system option ID.
     */
    #[DTA\Data(field: "os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $os = null;

    /**
     * Selected control panel option ID.
     */
    #[DTA\Data(field: "cp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $cp = null;

    /**
     * Selected RAID option ID.
     */
    #[DTA\Data(field: "raid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $raid = null;

    /**
     * Selected hard drive option ID.
     */
    #[DTA\Data(field: "hd", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $hd = null;

    /**
     * Selected datacenter region ID.
     */
    #[DTA\Data(field: "region", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $region = null;

}
