<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue
{
    #[DTA\Data(field: "invoices_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $invoices_id = null;

    #[DTA\Data(field: "invoices_description", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_description = null;

    #[DTA\Data(field: "invoices_amount", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "float"])]
    public float|null $invoices_amount = null;

    #[DTA\Data(field: "invoices_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_date = null;

    #[DTA\Data(field: "invoices_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_currency = null;

    #[DTA\Data(field: "currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency_symbol = null;

    #[DTA\Data(field: "invoices_date_formatted", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoices_date_formatted = null;

}
