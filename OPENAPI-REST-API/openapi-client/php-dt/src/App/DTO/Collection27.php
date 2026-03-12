<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ScalarList", ["type" => "object"])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "Scalar", "options" => ["type" => "object"]]
]])]
class Collection27 extends \ArrayObject
{
}
