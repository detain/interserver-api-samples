(ns inter-server-management-api.specs.get-scrub-ip-details-200-response-client-links-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-scrub-ip-details-200-response-client-links-inner-data
  {
   (ds/opt :label) string?
   (ds/opt :link) string?
   (ds/opt :icon) string?
   (ds/opt :icon_text) string?
   (ds/opt :help_text) string?
   (ds/opt :other_attr) string?
   })

(def get-scrub-ip-details-200-response-client-links-inner-spec
  (ds/spec
    {:name ::get-scrub-ip-details-200-response-client-links-inner
     :spec get-scrub-ip-details-200-response-client-links-inner-data}))
