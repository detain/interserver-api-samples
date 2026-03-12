(ns inter-server-management-api.specs.mail-cancel-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-cancel-200-response-data
  {
   (ds/req :success) boolean?
   (ds/req :text) string?
   })

(def mail-cancel-200-response-spec
  (ds/spec
    {:name ::mail-cancel-200-response
     :spec mail-cancel-200-response-data}))
