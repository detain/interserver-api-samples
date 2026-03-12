<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
 */
class BuyItNowRow
{
    /**
     * Unique server ID. Use this as &#x60;server_id&#x60; in &#x60;POST /servers/order/buy_now_server&#x60;.
     */
    #[DTA\Data(field: "server_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_id = null;

    #[DTA\Data(field: "cpu", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection21::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection21::class])]
    public \App\DTO\Collection21|null $cpu = null;

    #[DTA\Data(field: "memory", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $memory = null;

    #[DTA\Data(field: "disk", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection22::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection22::class])]
    public \App\DTO\Collection22|null $disk = null;

    #[DTA\Data(field: "bandwidth", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bandwidth = null;

    #[DTA\Data(field: "ips", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ips = null;

    #[DTA\Data(field: "location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $location = null;

    #[DTA\Data(field: "price", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $price = null;

}
