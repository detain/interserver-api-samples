<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Success response after placing a buy-it-now dedicated server order.
 */
class ServersBuyNowResponse
{
    /**
     * Whether the order was placed successfully.
     */
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    /**
     * Human-readable status message.
     */
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    #[DTA\Data(field: "order_details", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\ServersBuyNowResponseOrderDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\ServersBuyNowResponseOrderDetails::class])]
    public \App\DTO\ServersBuyNowResponseOrderDetails|null $order_details = null;

}
