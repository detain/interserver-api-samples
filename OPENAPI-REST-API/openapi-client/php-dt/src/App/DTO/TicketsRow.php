<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Information about a single ticket.
 */
class TicketsRow
{
    #[DTA\Data(field: "title")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "ticketmaskid")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ticketmaskid = null;

    #[DTA\Data(field: "lastreplier")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $lastreplier = null;

    #[DTA\Data(field: "status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    #[DTA\Data(field: "priority")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $priority = null;

    #[DTA\Data(field: "total_replies")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $total_replies = null;

    #[DTA\Data(field: "lastactivity")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $lastactivity = null;

    #[DTA\Data(field: "departmenttitle")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $departmenttitle = null;

    #[DTA\Data(field: "ticketid")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $ticketid = null;

    #[DTA\Data(field: "can_close")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $can_close = null;

    #[DTA\Data(field: "attachments")]
    #[DTA\Validator("Scalar", ["type" => "mixed"])]
    public mixed|null $attachments = null;

    #[DTA\Data(field: "status_text")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status_text = null;

    #[DTA\Data(field: "checked")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $checked = null;

}
