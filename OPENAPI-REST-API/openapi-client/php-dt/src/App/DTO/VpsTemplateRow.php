<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A VPS OS Template.
 */
class VpsTemplateRow
{
    #[DTA\Data(field: "template_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_id = null;

    #[DTA\Data(field: "template_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_type = null;

    #[DTA\Data(field: "template_os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_os = null;

    #[DTA\Data(field: "template_version", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_version = null;

    #[DTA\Data(field: "template_bits", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_bits = null;

    #[DTA\Data(field: "template_file", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_file = null;

    #[DTA\Data(field: "template_available", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_available = null;

    #[DTA\Data(field: "template_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_name = null;

    #[DTA\Data(field: "template_dir", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $template_dir = null;

}
