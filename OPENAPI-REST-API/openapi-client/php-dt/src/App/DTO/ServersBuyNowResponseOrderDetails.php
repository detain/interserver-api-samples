<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Details of the placed order.
 */
class ServersBuyNowResponseOrderDetails
{
    /**
     * The newly created service ID for the ordered server.
     */
    #[DTA\Data(field: "service_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $service_id = null;

    /**
     * The invoice ID generated for the order.
     */
    #[DTA\Data(field: "invoice_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $invoice_id = null;

}
