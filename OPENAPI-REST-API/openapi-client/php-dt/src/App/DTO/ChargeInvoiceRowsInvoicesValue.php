<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ChargeInvoiceRowsInvoicesValue
{
    /**
     * Unique invoice ID.
     */
    #[DTA\Data(field: "invoices_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $invoices_id = null;

    /**
     * Description of the invoice charge.
     */
    #[DTA\Data(field: "invoices_description", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_description = null;

    /**
     * Invoice amount.
     */
    #[DTA\Data(field: "invoices_amount", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $invoices_amount = null;

    /**
     * Invoice date.
     */
    #[DTA\Data(field: "invoices_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_date = null;

    #[DTA\Data(field: "invoices_paid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $invoices_paid = null;

    #[DTA\Data(field: "invoices_due_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_due_date = null;

    #[DTA\Data(field: "invoices_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_currency = null;

    #[DTA\Data(field: "currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency_symbol = null;

    #[DTA\Data(field: "invoices_date_formatted", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_date_formatted = null;

    /**
     * This is optional when invoices_paid &#x3D; 1 this array will show
     */
    #[DTA\Data(field: "paid_invoices", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection17::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection17::class])]
    public \App\DTO\Collection17|null $paid_invoices = null;

}
