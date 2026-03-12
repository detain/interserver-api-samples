(ns inter-server-management-api.specs.cancel-domain-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def cancel-domain-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def cancel-domain-200-response-spec
  (ds/spec
    {:name ::cancel-domain-200-response
     :spec cancel-domain-200-response-data}))
