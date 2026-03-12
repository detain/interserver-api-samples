<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Ticket details
 */
class ViewTicketResponse
{
    #[DTA\Data(field: "success")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "ticket")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\TicketDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\TicketDetails::class])]
    public \App\DTO\TicketDetails|null $ticket = null;

    #[DTA\Data(field: "ticket_custom_fields", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\TicketCustomFieldDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\TicketCustomFieldDetails::class])]
    public \App\DTO\TicketCustomFieldDetails|null $ticket_custom_fields = null;

    #[DTA\Data(field: "ticket_posts", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\TicketPostDetails::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\TicketPostDetails::class])]
    public \App\DTO\TicketPostDetails|null $ticket_posts = null;

}
