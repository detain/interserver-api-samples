(ns inter-server-management-api.specs.backup-login-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-login-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   })

(def backup-login-response-spec
  (ds/spec
    {:name ::backup-login-response
     :spec backup-login-response-data}))
