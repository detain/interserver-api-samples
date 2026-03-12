<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Ticket statuses.
 */
class HomeTicketStatus
{
    /**
     * Count of open tickets.
     */
    #[DTA\Data(field: "Open", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $open = null;

    /**
     * Count of tickets on hold.
     */
    #[DTA\Data(field: "On Hold", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $on_hold = null;

}
