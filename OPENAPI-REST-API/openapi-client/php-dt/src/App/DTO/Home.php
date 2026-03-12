<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class Home
{
    /**
     * Last login IP.
     */
    #[DTA\Data(field: "last_login_ip")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $last_login_ip = null;

    /**
     * Last login time.
     */
    #[DTA\Data(field: "last_login")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $last_login = null;

    /**
     * Currency symbol.
     */
    #[DTA\Data(field: "currency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency = null;

    /**
     * Amount with currency.
     */
    #[DTA\Data(field: "amount")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $amount = null;

    /**
     * Number of invoices.
     */
    #[DTA\Data(field: "invoice_list")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $invoice_list = null;

    /**
     * Balance with currency.
     */
    #[DTA\Data(field: "balance")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $balance = null;

    /**
     * Users full name.
     */
    #[DTA\Data(field: "full_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $full_name = null;

    /**
     * User email address.
     */
    #[DTA\Data(field: "email")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email = null;

    /**
     * List of tickets.
     */
    #[DTA\Data(field: "tickets")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection39::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection39::class])]
    public \App\DTO\Collection39|null $tickets = null;

    #[DTA\Data(field: "ticketStatus")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeTicketStatus::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeTicketStatus::class])]
    public \App\DTO\HomeTicketStatus|null $ticket_status = null;

    #[DTA\Data(field: "ticketStatusView")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeTicketStatusView::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeTicketStatusView::class])]
    public \App\DTO\HomeTicketStatusView|null $ticket_status_view = null;

    #[DTA\Data(field: "details")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeDetails::class])]
    public \App\DTO\HomeDetails|null $details = null;

    #[DTA\Data(field: "services")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\HomeServices::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\HomeServices::class])]
    public \App\DTO\HomeServices|null $services = null;

    /**
     * Affiliate amount with currency.
     */
    #[DTA\Data(field: "AFFILIATE_AMOUNT")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_amount = null;

}
