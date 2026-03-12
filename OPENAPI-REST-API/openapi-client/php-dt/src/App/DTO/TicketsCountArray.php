<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class TicketsCountArray
{
    #[DTA\Data(field: "Open", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $open = null;

    #[DTA\Data(field: "On Hold", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $on_hold = null;

    #[DTA\Data(field: "Closed", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $closed = null;

}
