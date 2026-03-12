<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PostWebsiteMigrationRequest1
{
    #[DTA\Data(field: "custPortal", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_portal = null;

    #[DTA\Data(field: "regEmail", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $reg_email = null;

    #[DTA\Data(field: "password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $password = null;

    #[DTA\Data(field: "ctrlPanel", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ctrl_panel = null;

    #[DTA\Data(field: "ftpUsername", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ftp_username = null;

    #[DTA\Data(field: "ftpPassword", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ftp_password = null;

    #[DTA\Data(field: "siteBusyMig", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $site_busy_mig = null;

    #[DTA\Data(field: "splReqMig", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $spl_req_mig = null;

    #[DTA\Data(field: "domainReg", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg = null;

    #[DTA\Data(field: "dataMig", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $data_mig = null;

    #[DTA\Data(field: "domainRegPortal", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg_portal = null;

    #[DTA\Data(field: "domainRegEmail", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg_email = null;

    #[DTA\Data(field: "domainRegPassword", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_reg_password = null;

}
