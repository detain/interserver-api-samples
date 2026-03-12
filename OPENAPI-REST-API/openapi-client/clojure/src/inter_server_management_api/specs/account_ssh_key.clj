(ns inter-server-management-api.specs.account-ssh-key
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-ssh-key-data
  {
   (ds/opt :ssh_key) string?
   })

(def account-ssh-key-spec
  (ds/spec
    {:name ::account-ssh-key
     :spec account-ssh-key-data}))
