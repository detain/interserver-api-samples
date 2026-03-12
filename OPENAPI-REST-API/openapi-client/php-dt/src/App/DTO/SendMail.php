<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Details for an Email
 */
class SendMail
{
    /**
     * The Contact whom is the primary recipient of this email.
     */
    #[DTA\Data(field: "to")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $to = null;

    /**
     * The contact whom is the this email is from.
     */
    #[DTA\Data(field: "from")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $from = null;

    /**
     * The subject or title of the email
     */
    #[DTA\Data(field: "subject")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $subject = null;

    /**
     * The main email contents.
     */
    #[DTA\Data(field: "body")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $body = null;

}
