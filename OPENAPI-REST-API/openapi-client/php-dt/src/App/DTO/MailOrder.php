<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A mail order record
 */
class MailOrder
{
    /**
     * The ID of the order.
     */
    #[DTA\Data(field: "id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $id = null;

    /**
     * The order status.
     */
    #[DTA\Data(field: "status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    /**
     * The username to use for this order.
     */
    #[DTA\Data(field: "username")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $username = null;

    /**
     * Optional order comment.
     */
    #[DTA\Data(field: "comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $comment = null;

}
