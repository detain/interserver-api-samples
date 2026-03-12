<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Webhosting&#x60; &#x60;GET&#x60; request.
 */
class WebsiteRow
{
    /**
     * The id of the website.
     */
    #[DTA\Data(field: "website_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_id = null;

    /**
     * The hostname of the website.
     */
    #[DTA\Data(field: "website_hostname")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_hostname = null;

    /**
     * The repeat invoices cost of the website.
     */
    #[DTA\Data(field: "repeat_invoices_cost")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $repeat_invoices_cost = null;

    /**
     * The status of the website.
     */
    #[DTA\Data(field: "website_status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_status = null;

    /**
     * The services name of the website.
     */
    #[DTA\Data(field: "services_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $services_name = null;

    /**
     * The comment of the website.
     */
    #[DTA\Data(field: "website_comment")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_comment = null;

}
