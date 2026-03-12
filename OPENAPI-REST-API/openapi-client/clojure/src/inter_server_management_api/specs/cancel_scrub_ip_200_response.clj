(ns inter-server-management-api.specs.cancel-scrub-ip-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def cancel-scrub-ip-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def cancel-scrub-ip-200-response-spec
  (ds/spec
    {:name ::cancel-scrub-ip-200-response
     :spec cancel-scrub-ip-200-response-data}))
