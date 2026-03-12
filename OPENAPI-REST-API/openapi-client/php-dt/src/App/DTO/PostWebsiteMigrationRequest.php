<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PostWebsiteMigrationRequest
{
    /**
     * URL of the customer&#39;s current hosting portal.
     */
    #[DTA\Data(field: "custPortal", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_portal = null;

    /**
     * Registered email address at the current host.
     */
    #[DTA\Data(field: "regEmail", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $reg_email = null;

    /**
     * Password for the current hosting account.
     */
    #[DTA\Data(field: "password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $password = null;

    /**
     * URL of the current control panel.
     */
    #[DTA\Data(field: "ctrlPanel", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ctrl_panel = null;

    /**
     * FTP username at the current host.
     */
    #[DTA\Data(field: "ftpUsername", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ftp_username = null;

    /**
     * FTP password at the current host.
     */
    #[DTA\Data(field: "ftpPassword", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ftp_password = null;

    /**
     * Information about site traffic during migration.
     */
    #[DTA\Data(field: "siteBusyMig", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $site_busy_mig = null;

    /**
     * Special requirements for the migration.
     */
    #[DTA\Data(field: "splReqMig", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $spl_req_mig = null;

    /**
     * Whether domain registration assistance is needed.
     */
    #[DTA\Data(field: "domainReg", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg = null;

    /**
     * Data migration timing preference.
     */
    #[DTA\Data(field: "dataMig", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $data_mig = null;

    /**
     * Domain registrar portal URL.
     */
    #[DTA\Data(field: "domainRegPortal", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg_portal = null;

    /**
     * Email for the domain registrar account.
     */
    #[DTA\Data(field: "domainRegEmail", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg_email = null;

    /**
     * Password for the domain registrar account.
     */
    #[DTA\Data(field: "domainRegPassword", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg_password = null;

}
