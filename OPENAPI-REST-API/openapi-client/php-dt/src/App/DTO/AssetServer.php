<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A pre-configured asset server available for immediate provisioning.
 */
class AssetServer
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    #[DTA\Data(field: "Region", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $region = null;

    #[DTA\Data(field: "price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $price = null;

    #[DTA\Data(field: "CPU", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $cpu = null;

    #[DTA\Data(field: "Memory", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $memory = null;

    #[DTA\Data(field: "Bandwidth", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $bandwidth = null;

    #[DTA\Data(field: "IPs", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $ips = null;

    #[DTA\Data(field: "HD", nullable: true)]
    #[DTA\Strategy("Object", ["type" => ::class])]
    #[DTA\Validator("TypeCompliant", ["type" => ::class])]
    public array|null $hd = null;

}
