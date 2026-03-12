<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class WebsiteServiceMaster
{
    /**
     * Website ID for the service master
     */
    #[DTA\Data(field: "website_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_id = null;

    /**
     * Website name for the service master
     */
    #[DTA\Data(field: "website_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_name = null;

    /**
     * IP address for the service master
     */
    #[DTA\Data(field: "website_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_ip = null;

    /**
     * Website type for the service master
     */
    #[DTA\Data(field: "website_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_type = null;

    /**
     * Availability status for the service master
     */
    #[DTA\Data(field: "website_available", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_available = null;

    /**
     * Hard drive size for the service master
     */
    #[DTA\Data(field: "website_hdsize", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_hdsize = null;

    /**
     * Free hard drive space for the service master
     */
    #[DTA\Data(field: "website_hdfree", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_hdfree = null;

    /**
     * Load for the service master
     */
    #[DTA\Data(field: "website_load", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_load = null;

    /**
     * Last update date for the service master
     */
    #[DTA\Data(field: "website_last_update", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_last_update = null;

    /**
     * Maximum number of sites for the service master
     */
    #[DTA\Data(field: "website_max_sites", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_max_sites = null;

    /**
     * Order number for the service master
     */
    #[DTA\Data(field: "website_order", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_order = null;

    /**
     * Partitions for the service master
     */
    #[DTA\Data(field: "website_partitions", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_partitions = null;

    /**
     * DNS server 1 for the service master
     */
    #[DTA\Data(field: "website_dns1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_dns1 = null;

    /**
     * DNS server 2 for the service master
     */
    #[DTA\Data(field: "website_dns2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_dns2 = null;

}
