<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Response returned after creating a new support ticket.
 */
class TicketNewResponse
{
    #[DTA\Data(field: "text")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

    #[DTA\Data(field: "success")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "ticket_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $ticket_id = null;

}
