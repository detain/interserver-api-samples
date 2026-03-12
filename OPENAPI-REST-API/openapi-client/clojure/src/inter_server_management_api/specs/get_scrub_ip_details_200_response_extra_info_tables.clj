(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables-scrub-ips :refer :all]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-extra-info-tables-data
  {
   (ds/opt :scrub_ips) get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-spec
   })

(def get-scrub-ip-details-200-response-extra-info-tables-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-extra-info-tables
     :spec get-scrub-ip-details-200-response-extra-info-tables-data}))
