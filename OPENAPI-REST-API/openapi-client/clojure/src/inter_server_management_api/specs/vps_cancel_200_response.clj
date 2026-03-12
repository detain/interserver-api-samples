(ns inter-server-management-api.specs.vps-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def vps-cancel-200-response-spec
  (ds/spec
    {:name ::vps-cancel-200-response
     :spec vps-cancel-200-response-data}))
