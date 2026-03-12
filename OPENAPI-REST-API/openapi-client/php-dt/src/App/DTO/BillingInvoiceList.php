<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Summary list of invoices for the account.
 */
class BillingInvoiceList
{
    /**
     * Invoice rows returned for the account.
     */
    #[DTA\Data(field: "rows", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection19::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection19::class])]
    public \App\DTO\Collection19|null $rows = null;

    /**
     * Totals and summary data for the invoices list.
     */
    #[DTA\Data(field: "summary", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $summary = null;

}
