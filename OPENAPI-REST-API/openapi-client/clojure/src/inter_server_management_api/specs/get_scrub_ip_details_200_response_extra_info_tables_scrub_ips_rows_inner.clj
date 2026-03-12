(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner
     :spec get-scrub-ip-details-200-response-extra-info-tables-scrub-ips-rows-inner-data}))
