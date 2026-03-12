<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class ReplyTicketResponseSchema
{
    #[DTA\Data(field: "success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $success = null;

    #[DTA\Data(field: "post_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $post_id = null;

}
