<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class InitiatePayment200Response
{
    /**
     * The response type indicating how to handle the payment. Possible values: &#x60;redirect&#x60; (redirect user to a URL), &#x60;submit&#x60; (submit a form to a URL), &#x60;single&#x60; (immediate result).
     */
    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    /**
     * URL to redirect the user to for payment (when type is &#x60;redirect&#x60;).
     */
    #[DTA\Data(field: "redirect", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $redirect = null;

    /**
     * Form action URL (when type is &#x60;submit&#x60;).
     */
    #[DTA\Data(field: "action", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $action = null;

    /**
     * HTTP method for the form submission (when type is &#x60;submit&#x60;).
     */
    #[DTA\Data(field: "method", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $method = null;

    /**
     * Form field name-value pairs to submit (when type is &#x60;submit&#x60;).
     */
    #[DTA\Data(field: "items", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $items = null;

    /**
     * Status or result text.
     */
    #[DTA\Data(field: "text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $text = null;

}
