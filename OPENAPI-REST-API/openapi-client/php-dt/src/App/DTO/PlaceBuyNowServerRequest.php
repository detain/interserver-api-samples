<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PlaceBuyNowServerRequest
{
    /**
     * The ID of the buy-it-now server configuration to order. Use the server listing from &#x60;GET /servers/order/buy_now_server&#x60; to find valid IDs.
     */
    #[DTA\Data(field: "server_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $server_id = null;

    /**
     * The fully-qualified hostname to assign to the server.
     */
    #[DTA\Data(field: "server_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_hostname = null;

    /**
     * The root or administrator password to set on the server.
     */
    #[DTA\Data(field: "server_root_password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_root_password = null;

}
