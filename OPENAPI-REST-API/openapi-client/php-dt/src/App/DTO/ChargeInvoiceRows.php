<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 */
class ChargeInvoiceRows
{
    /**
     * Whether the invoice retrieval was successful.
     */
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    /**
     * List of invoices for the service.
     */
    #[DTA\Data(field: "invoices", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection18::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection18::class])]
    public \App\DTO\Collection18|null $invoices = null;

}
