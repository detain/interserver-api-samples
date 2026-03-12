<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
 */
class MailRow
{
    /**
     * The id of the mail.
     */
    #[DTA\Data(field: "mail_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_id = null;

    /**
     * The repeat invoices cost of the mail.
     */
    #[DTA\Data(field: "repeat_invoices_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $repeat_invoices_cost = null;

    /**
     * The username of the mail.
     */
    #[DTA\Data(field: "mail_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_username = null;

    /**
     * The status of the mail.
     */
    #[DTA\Data(field: "mail_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_status = null;

    /**
     * The services name of the mail.
     */
    #[DTA\Data(field: "services_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

}
