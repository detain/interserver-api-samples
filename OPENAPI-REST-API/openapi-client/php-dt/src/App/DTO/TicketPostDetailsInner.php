<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class TicketPostDetailsInner
{
    #[DTA\Data(field: "post_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $post_id = null;

    #[DTA\Data(field: "date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $date = null;

    #[DTA\Data(field: "contents", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $contents = null;

    #[DTA\Data(field: "creator", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $creator = null;

    #[DTA\Data(field: "creator_email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $creator_email = null;

    #[DTA\Data(field: "creator_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $creator_name = null;

    #[DTA\Data(field: "hasattachments", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $hasattachments = null;

    #[DTA\Data(field: "attachment_download", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $attachment_download = null;

}
