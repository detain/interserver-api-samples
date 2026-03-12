<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Billing information for a dedicated server service including payment status, billing cycle, and cost.
 */
class ServerBillingDetails
{
    #[DTA\Data(field: "service_last_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_last_invoice_date = null;

    #[DTA\Data(field: "service_payment_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_payment_status = null;

    #[DTA\Data(field: "service_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_frequency = null;

    #[DTA\Data(field: "next_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $next_date = null;

    #[DTA\Data(field: "service_next_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_next_invoice_date = null;

    #[DTA\Data(field: "service_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency = null;

    #[DTA\Data(field: "service_currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency_symbol = null;

    #[DTA\Data(field: "service_cost_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost_info = null;

    #[DTA\Data(field: "service_extra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection95::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection95::class])]
    public \App\DTO\Collection95|null $service_extra = null;

    #[DTA\Data(field: "service_extra_json", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra_json = null;

}
